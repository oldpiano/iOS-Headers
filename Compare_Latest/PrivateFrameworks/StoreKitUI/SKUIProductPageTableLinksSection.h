/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIColorScheme, SKUIProductPageItem;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection
{
    NSMutableArray *_actions;
    SKUIProductPageItem *_item;
    NSMutableArray *_titles;
    SKUIColorScheme *_colorScheme;
}

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end

