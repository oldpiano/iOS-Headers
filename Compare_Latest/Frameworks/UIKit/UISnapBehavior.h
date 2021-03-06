/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIDynamicBehavior.h>

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior
{
    struct CGPoint _anchorPoint;
    float _damping;
    float _distance;
    float _frequency;
    struct {
        unsigned int attachedToView:1;
        unsigned int dampingSet:1;
        unsigned int frequencySet:1;
        unsigned int lengthSet:1;
    } _stateFlags;
    NSMutableArray *_joints;
    PKPhysicsBody *_anchorBody;
}

@property(nonatomic) float damping; // @synthesize damping=_damping;
- (id)description;
- (void)_dissociate;
- (void)_associate;
- (void)_setFrequency:(float)arg1;
- (float)_frequency;
- (void)_setDistance:(float)arg1;
- (float)_distance;
- (void)dealloc;
- (id)initWithItem:(id)arg1 snapToPoint:(struct CGPoint)arg2;
- (id)init;

@end

