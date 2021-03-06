/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UIViewControllerWrapperView : UIView
{
    BOOL _tightWrappingDisabled;
}

+ (id)existingWrapperViewForView:(id)arg1;
+ (id)wrapperViewForView:(id)arg1 wrapperFrame:(struct CGRect)arg2 viewFrame:(struct CGRect)arg3;
+ (id)wrapperViewForView:(id)arg1 frame:(struct CGRect)arg2;
@property(nonatomic) BOOL tightWrappingDisabled; // @synthesize tightWrappingDisabled=_tightWrappingDisabled;
- (void)unwrapView:(id)arg1;
- (void)unwrapView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

