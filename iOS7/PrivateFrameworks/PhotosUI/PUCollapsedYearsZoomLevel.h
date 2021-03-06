/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUZoomableGridZoomLevel.h>

#import "PUSectionedGridLayoutDelegate-Protocol.h"

@class NSArray;

@interface PUCollapsedYearsZoomLevel : PUZoomableGridZoomLevel <PUSectionedGridLayoutDelegate>
{
    NSArray *_allYearLists;
}

- (void).cxx_destruct;
- (void)willShowMagnifiedViewController:(id)arg1;
- (void)sectionedGridLayoutWillPrepareLayout:(id)arg1;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)modelDidChange;
- (BOOL)supportsIncrementalChangeNotifications;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (void)configureSectionHeaderView:(id)arg1 atIndexPath:(id)arg2;
- (int)maxRowsPerSection;
- (int)imageFormat;
- (int)renderedStripsThumbnailImageFormat;
- (id)sectionHeaderElementKind;
- (id)renderedStripsElementKind;
- (id)newLowerZoomLevel;
- (id)newHigherZoomLevel;
- (id)newCollectionViewLayout;
- (id)displayTitle;
- (id)_yearMomentLists;

@end

