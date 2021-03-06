/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate-Protocol.h"

@class SBFloatyFolderView, SBFolderIconView, SBFolderZoomSettings;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    SBFloatyFolderView *_folderView;
    SBFolderIconView *_folderIconView;
    struct CGAffineTransform _folderIconViewScaleTransform;
}

- (void)_calculateZoomedOffset:(struct CGPoint *)arg1 scale:(float *)arg2 forIcon:(id)arg3 withView:(id)arg4;
- (void)_applyFolderFadeForZoomFraction:(float)arg1;
- (void)_applyIconTransformForZoomFraction:(float)arg1;
- (void)_applyIconCrossfadeForZoomFraction:(float)arg1;
- (void)_animateToZoomFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupZoom;
- (void)_setZoomFraction:(float)arg1;
- (void)_prepareZoom;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScale:(float)arg3;

// Remaining properties
@property(retain, nonatomic) SBFolderZoomSettings *zoomSettings;

@end

