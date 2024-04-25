//
//  VideoDecoderRenderer.h
//  Moonlight
//
//  Created by Cameron Gutman on 10/18/14.
//  Copyright (c) 2014 Moonlight Stream. All rights reserved.
//

@import AVFoundation;
@import VideoToolbox;

#import "ConnectionCallbacks.h"

#include "Limelight.h"
#import "StreamViewRenderer.h"

@interface VideoDecoderRenderer : NSObject

- (id)initWithView:(UIView*)view callbacks:(id<ConnectionCallbacks>)callbacks streamAspectRatio:(float)aspectRatio useFramePacing:(BOOL)useFramePacing
 metalFxMultiplier:(NSInteger)metalFxMultiplier;

- (void)setupWithVideoFormat:(int)videoFormat width:(int)videoWidth height:(int)videoHeight frameRate:(int)frameRate;
- (void)start;
- (void)stop;
- (void)setHdrMode:(BOOL)enabled;

- (int)submitDecodeBuffer:(unsigned char *)data length:(int)length bufferType:(int)bufferType decodeUnit:(PDECODE_UNIT)du;

@end
