/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@class SBAnimationSettings, SBBounceSettings;

@interface SBLockScreenSettings : _UISettings
{
    SBBounceSettings *_verticalBounceSettings;
    SBBounceSettings *_horizontalBounceSettings;
    SBAnimationSettings *_unlockWallpaperOutSettings;
    SBAnimationSettings *_unlockWallpaperInSettings;
    float _unlockSwipeWallpaperAlpha;
}

+ (id)settingsControllerModule;
@property float unlockSwipeWallpaperAlpha; // @synthesize unlockSwipeWallpaperAlpha=_unlockSwipeWallpaperAlpha;
@property(retain) SBAnimationSettings *unlockWallpaperInSettings; // @synthesize unlockWallpaperInSettings=_unlockWallpaperInSettings;
@property(retain) SBAnimationSettings *unlockWallpaperOutSettings; // @synthesize unlockWallpaperOutSettings=_unlockWallpaperOutSettings;
@property(retain) SBBounceSettings *horizontalBounceSettings; // @synthesize horizontalBounceSettings=_horizontalBounceSettings;
@property(retain) SBBounceSettings *verticalBounceSettings; // @synthesize verticalBounceSettings=_verticalBounceSettings;
- (void)setDefaultValues;

@end

