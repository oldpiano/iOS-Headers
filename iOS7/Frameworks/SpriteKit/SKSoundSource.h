/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SKSoundSource : NSObject
{
    unsigned int _sourceId;
    NSMutableArray *_buffers;
}

+ (id)sourceWithBuffer:(id)arg1;
+ (id)source;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)purgeCompletedBuffers;
@property(readonly, nonatomic) int queuedBufferCount;
@property(readonly, nonatomic) int completedBufferCount;
@property(readonly, nonatomic) BOOL isPlaying;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) double gain;
@property(nonatomic) BOOL shouldLoop;
- (void)stop;
- (void)pause;
- (void)play;
- (void)queueBuffer:(id)arg1;
- (id)init;

@end

