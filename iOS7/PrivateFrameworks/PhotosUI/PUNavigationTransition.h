/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUViewControllerTransition.h>

@class UINavigationController;

@interface PUNavigationTransition : PUViewControllerTransition
{
    UINavigationController *_navigationController;
    int __operation;
}

+ (void)addAlongsideTransitionsForViewController:(id)arg1 inNavigationController:(id)arg2;
+ (BOOL)shouldCrossFadeBottomBars;
+ (id)animatorForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4;
@property(nonatomic, setter=_setOperation:) int _operation; // @synthesize _operation=__operation;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)completeInteractivePopTransitionFinished:(BOOL)arg1;
- (void)completeInteractivePushTransitionFinished:(BOOL)arg1;
- (void)transitionWillPopInteractively:(BOOL)arg1;
- (void)transitionWillPushInteractively:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;

@end

