/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@interface PTXParallaxEngineSettings : _UISettings
{
    BOOL _shiftEnabled;
    BOOL _showIdleIndicator;
    BOOL _jumpEnabled;
    BOOL _playJumpSound;
    BOOL _directionalLockEnabled;
    BOOL _showDirectionalLockIndicators;
    unsigned int _frameInterval;
    float _inputSmoothing;
    float _sigmoidDegree;
    float _shiftSpeed;
    float _shiftDistanceDependence;
    float _idleLeeway;
    float _delayBeforeIdle;
    float _jumpThreshold;
    float _directionalLockThreshold;
    float _directionalLockStickiness;
    float _directionalLockSharpness;
}

+ (id)settingsControllerModule;
@property BOOL showDirectionalLockIndicators; // @synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators;
@property float directionalLockSharpness; // @synthesize directionalLockSharpness=_directionalLockSharpness;
@property float directionalLockStickiness; // @synthesize directionalLockStickiness=_directionalLockStickiness;
@property float directionalLockThreshold; // @synthesize directionalLockThreshold=_directionalLockThreshold;
@property BOOL directionalLockEnabled; // @synthesize directionalLockEnabled=_directionalLockEnabled;
@property BOOL playJumpSound; // @synthesize playJumpSound=_playJumpSound;
@property float jumpThreshold; // @synthesize jumpThreshold=_jumpThreshold;
@property BOOL jumpEnabled; // @synthesize jumpEnabled=_jumpEnabled;
@property BOOL showIdleIndicator; // @synthesize showIdleIndicator=_showIdleIndicator;
@property float delayBeforeIdle; // @synthesize delayBeforeIdle=_delayBeforeIdle;
@property float idleLeeway; // @synthesize idleLeeway=_idleLeeway;
@property float shiftDistanceDependence; // @synthesize shiftDistanceDependence=_shiftDistanceDependence;
@property float shiftSpeed; // @synthesize shiftSpeed=_shiftSpeed;
@property BOOL shiftEnabled; // @synthesize shiftEnabled=_shiftEnabled;
@property float sigmoidDegree; // @synthesize sigmoidDegree=_sigmoidDegree;
@property float inputSmoothing; // @synthesize inputSmoothing=_inputSmoothing;
@property unsigned int frameInterval; // @synthesize frameInterval=_frameInterval;
- (void)setDefaultValues;

@end

