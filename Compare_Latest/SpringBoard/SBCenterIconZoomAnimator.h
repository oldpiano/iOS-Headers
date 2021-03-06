/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate-Protocol.h"

@class SBCenterZoomSettings, UIView;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    UIView *_zoomView;
    float _iconZoomedZ;
    float _centerRow;
    float _centerCol;
    struct CGPoint _cameraPosition;
}

@property(readonly, nonatomic) struct CGPoint cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
- (void)_calculateCentersAndCameraPosition;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)iconListViewLayoutInvalidated:(id)arg1;
- (void)iconListView:(id)arg1 wouldHaveMovedIcon:(id)arg2;
- (double)_iconZoomDelay;
- (void)_animateToZoomFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupZoom;
- (void)_setZoomFraction:(float)arg1;
- (void)_prepareZoom;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SBCenterZoomSettings *zoomSettings;

@end

