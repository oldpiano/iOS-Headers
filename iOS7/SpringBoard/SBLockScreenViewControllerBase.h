/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlert.h"

#import "SBShowcaseControllerOwner-Protocol.h"

@class SBUnlockActionContext;

@interface SBLockScreenViewControllerBase : SBAlert <SBShowcaseControllerOwner>
{
    id <SBLockScreenViewControllerDelegate> _delegate;
    SBUnlockActionContext *_customUnlockActionContext;
}

@property(nonatomic) id <SBLockScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setShowingOverheatUI:(BOOL)arg1;
- (BOOL)isShowingNewBulletin;
- (void)lockBarStoppedTracking:(id)arg1;
- (void)lockBarStartedTracking:(id)arg1;
- (BOOL)toggleMediaControls;
- (void)setChargingViewHasFadedOut:(BOOL)arg1;
- (BOOL)chargingViewHasFadedOut;
- (id)restoreFromSavedBulletinController;
- (BOOL)attemptDeviceUnlockWithPassword:(id)arg1 lockViewOwner:(id)arg2;
- (BOOL)willAllowOtherLockBarsToUnlock;
- (void)updateNowPlayingInfo:(id)arg1 app:(id)arg2;
- (id)activationBlockAnimated:(SEL)arg1;
- (BOOL)shouldShowInCallUI;
- (id)nameOfPluginController:(id)arg1;
- (id)interfaceControllingLockScreenPluginController;
- (id)highestPriorityLockScreenPluginController;
- (void)noteAlertSheetWasReplaced:(id)arg1 withAlertSheet:(id)arg2;
- (id)allPendingAlertItems;
- (BOOL)hasSuperModalAlertItems;
- (id)currentAlertItem;
- (id)dequeueAllPendingSuperModalAlertItems;
- (void)deactivateAlertItem:(id)arg1;
- (BOOL)activateAlertItem:(id)arg1;
- (BOOL)wantsToHandleAlert:(id)arg1;
- (BOOL)handleExternalKeyDownEvent;
- (void)noteNetworkTetheringStatusUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (BOOL)isLockScreenVisible;
- (BOOL)isShowingOverheatUI;
- (void)updateInterfaceIfNecessary;
- (BOOL)isShowingMediaControls;
- (void)updateOrientationForUndim;
- (BOOL)lockScreenBulletinControllerIsActive;
- (void)setCustomUnlockActionContext:(id)arg1;
- (id)_customUnlockActionContext;
- (id)currentUnlockActionContext;
- (BOOL)lockScreenIsShowingBulletins;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldShowSlideshowButton;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)prepareToEnterLostMode;
- (void)updateCardItem:(id)arg1;
- (void)deactivateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(int)arg2;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
- (id)activeLockScreenPluginController;
- (BOOL)isLockScreenPluginViewVisible;
- (void)showcase:(id)arg1 didTransferOwnershipToOwner:(id)arg2;
- (void)assumeShowcaseOwnership:(id)arg1;
- (void)showcaseWantsToBeDismissed:(id)arg1 animated:(BOOL)arg2;
- (void)showcase:(id)arg1 updateRevealMode:(int)arg2 withBlock:(id)arg3;
- (BOOL)presentShowcaseViewController:(id)arg1 revealMode:(int)arg2 completion:(id)arg3;
- (BOOL)hasActiveUIAccessories;
- (void)setInScreenOffMode:(BOOL)arg1;
- (BOOL)isInScreenOffMode;
- (void)startLockScreenFadeInAnimation;
- (BOOL)canRelockForAutoDimTimer;
- (BOOL)wantsScreenToAutoDim;
- (void)setForcesPasscodeViewDuringCall:(BOOL)arg1;
- (void)prepareToReturnToCameraFromCall;
- (void)cancelReturnToCameraAfterCall;
- (BOOL)shouldReturnToCameraAfterCall;
- (void)handlePhoneAppExitedIfNecessary;
- (void)noteStartingPhoneCallWhileUILocked;
- (BOOL)isMakingEmergencyCall;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(BOOL)arg1;
- (void)launchEmergencyDialer;
- (void)activateCamera;
- (BOOL)cameraIsVisible;
- (BOOL)cameraIsActive;
- (void)prepareForExternalUIUnlock;
- (void)deactivate;
- (void)activate;
- (BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)attemptToUnlockUIFromNotification;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)isPasscodeLockVisible;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 withUnlockSource:(int)arg3 andOptions:(id)arg4;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

