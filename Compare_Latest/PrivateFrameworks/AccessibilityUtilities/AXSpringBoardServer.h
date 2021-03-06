/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXSpringBoardServer : AXServer
{
    id _currentAlertHandler;
    NSMutableArray *_gestureOverrides;
    NSMutableArray *_actionHandlers;
}

+ (id)server;
- (BOOL)isGuidedAccessActive;
- (void)toggleNotificationCenter;
- (void)hideNotificationCenter;
- (void)copyStringToPasteboard:(id)arg1;
- (void)showNotificationCenter;
- (BOOL)isNotificationCenterVisible;
- (void)showControlCenter:(BOOL)arg1;
- (BOOL)isControlCenterVisible;
- (int)activeInterfaceOrientation;
- (int)activeApplicationOrientation;
- (int)pid;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (void)registerOverrideIntentForGesture:(int)arg1 withHandler:(id)arg2 withIdentifierCallback:(void)arg3;
- (void)setCancelGestureActivation:(int)arg1 cancelEnabled:(BOOL)arg2;
- (void)removeOverrideIntent:(id)arg1;
- (void)registerSpringBoardActionHandler:(id)arg1 withIdentifierCallback:(void)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)showAlert:(int)arg1 withHandler:(id)arg2 withData:(void)arg3;
- (void)showAlert:(int)arg1 withHandler:(id)arg2;
- (void)hideAlert;
- (void)cleanupAlertHandler;
- (float)volumeLevel;
- (BOOL)isScreenLockedWithPasscode:(char *)arg1;
- (BOOL)isRingerMuted;
- (BOOL)isSideSwitchUsedForOrientation;
- (void)resetDimTimer;
- (BOOL)isVideoPlaying;
- (void)setSystemGesturesEnabled:(BOOL)arg1;
- (BOOL)isOrientationLocked;
- (BOOL)isSystemSleeping;
- (int)topEventPidOverride;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isSiriListening;
- (void)setSiriListening:(BOOL)arg1;
- (BOOL)isVoiceControlRunning;
- (void)startHearingAidServer;
- (void)toggleHearingControl;
- (void)setVolume:(float)arg1;
- (void)openSCATCustomGestureCreation;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openAppSwitcher;
- (void)openVoiceControl;
- (BOOL)isSiriVisible;
- (void)openSiri;
- (void)takeScreenshot;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (BOOL)_shouldValidateEntitlements;
- (id)_handleActionResult:(id)arg1;
- (id)_handleGestureOverrideResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (id)_serviceName;
- (void)dealloc;
- (id)init;

@end

