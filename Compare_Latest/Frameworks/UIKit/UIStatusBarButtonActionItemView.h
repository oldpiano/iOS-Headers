/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIStatusBarItemView.h>

@class UIButton;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView
{
    UIButton *_button;
}

- (BOOL)usesAdvancedActions;
- (int)buttonType;
- (void)_pressAndHoldButton:(id)arg1;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressButton:(id)arg1;
- (void)_triggerButtonWithAction:(int)arg1;
- (void)layoutSubviews;
- (float)updateContentsAndWidth;
- (void)dealloc;

@end

