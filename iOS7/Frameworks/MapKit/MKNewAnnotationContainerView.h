/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKAnnotationContainerView.h>

@interface MKNewAnnotationContainerView : MKAnnotationContainerView
{
    BOOL _suppress;
}

- (void)setAnnotationViewsRotationRadians:(float)arg1 animation:(id)arg2;
- (void)_updateAddedAnnotationRotation:(id)arg1;
- (void)_updateAnnotationViewPerspective;
- (void)_updateAnnotationViewPositions;
- (void)stopSuppressingUpdates;
- (void)suppressUpdates;
- (void)_updateAnnotationView:(id)arg1;

@end

