/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIRefreshControlContentView.h>

@class CALayer, CAReplicatorLayer, UILabel;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView
{
    BOOL _animationsAreValid;
    CALayer *_replicatorContainer;
    CAReplicatorLayer *_replicatorLayer;
    CALayer *_seed;
    BOOL _hasFinishedRevealing;
    UILabel *_textLabel;
    BOOL _areAnimationsValid;
    float _currentPopStiffness;
}

@property(nonatomic) float currentPopStiffness; // @synthesize currentPopStiffness=_currentPopStiffness;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) BOOL areAnimationsValid; // @synthesize areAnimationsValid=_areAnimationsValid;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)_effectiveTintColorWithAlpha:(float)arg1;
- (id)_effectiveTintColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)maximumSnappingHeight;
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (double)_currentTimeOffset;
- (void)_updateTimeOffsetOfRelevantLayers;
- (id)_springAnimationForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)_snappingMagic;
- (id)_goingAwayAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 beginTime:(double)arg4 duration:(double)arg5;
- (id)_tickAnimation;
- (id)_spinningAnimation;
- (id)_instanceAlphaOffsetAnimation;
- (id)_revealingFadeAnimation;
- (id)_revealingAnimation;
- (void)_goAway;
- (void)_tick;
- (void)_spin;
- (void)_reveal;
- (void)_resetToRevealingState;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (int)style;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

