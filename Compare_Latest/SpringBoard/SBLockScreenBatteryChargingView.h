/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SBLockScreenBatteryFillView, UILabel;

@interface SBLockScreenBatteryChargingView : UIView
{
    UIView *_batteryContainerView;
    UIView *_batteryBlurView;
    SBLockScreenBatteryFillView *_batteryFillView;
    UILabel *_chargePercentLabel;
}

- (float)_chargingTextBaselineOffset;
- (id)_chargePercentFont;
- (void)layoutSubviews;
@property(nonatomic) BOOL batteryVisible;
- (void)setChargePercentage:(int)arg1 detailed:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

