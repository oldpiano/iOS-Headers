/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView
{
    UISelectionGrabberDot *m_dotView;
    BOOL m_isDotted;
    BOOL m_activeFlattened;
    BOOL m_alertFlattened;
    BOOL m_navigationTransitionFlattened;
    BOOL m_animating;
    int m_orientation;
    int _applicationDeactivationReason;
}

+ (id)_grabberDot;
@property(nonatomic) int orientation; // @synthesize orientation=m_orientation;
@property(nonatomic) BOOL animating; // @synthesize animating=m_animating;
@property(nonatomic) BOOL navigationTransitionFlattened; // @synthesize navigationTransitionFlattened=m_navigationTransitionFlattened;
@property(nonatomic) BOOL activeFlattened; // @synthesize activeFlattened=m_activeFlattened;
@property(nonatomic) BOOL alertFlattened; // @synthesize alertFlattened=m_alertFlattened;
@property(nonatomic) BOOL isDotted; // @synthesize isDotted=m_isDotted;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;
- (BOOL)isPointedUp;
- (BOOL)isPointedDown;
- (BOOL)isVertical;
- (void)updateDot;
- (BOOL)dotIsVisbleInDocument:(struct CGRect)arg1;
- (BOOL)clipDot:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)arg1;
- (BOOL)autoscrolled;
- (BOOL)inputViewIsChanging;
- (BOOL)isRotating;
- (BOOL)isScaling;
- (BOOL)isScrolling;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (void)saveDeactivationReason:(id)arg1;
- (void)canExpandAfterAlert:(id)arg1;
- (void)mustFlattenForAlert:(id)arg1;
@property(readonly, nonatomic) UITextRangeView *hostView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
