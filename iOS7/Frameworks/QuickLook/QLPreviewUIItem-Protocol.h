/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "QLPreviewItem-Protocol.h"

@class UIImage;

@protocol QLPreviewUIItem <QLPreviewItem>
@property(readonly) int previewItemIndex;
@property(readonly) int level;
@property(readonly) UIImage *icon;
- (void)cancelIconUpdate;
- (void)updateIconWithSize:(struct CGSize)arg1 completionBlock:(id)arg2;
@end

