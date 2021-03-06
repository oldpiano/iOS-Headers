/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PLPublishAlbum, PLTableViewEditableCell, UIKeyboard, UITableView, UITableViewCell, UIView;

@interface PLPublishingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_containerView;
    UITableView *_table;
    PLTableViewEditableCell *_posterCell;
    PLTableViewEditableCell *_titleCell;
    PLTableViewEditableCell *_descriptionCell;
    UIView *_accountView;
    UITableViewCell *_loadingCell;
    NSMutableArray *_albumCells;
    NSArray *_albums;
    PLPublishAlbum *_selectedAlbum;
    NSString *_username;
    NSString *_contentTitle;
    NSString *_contentDescription;
    UIKeyboard *_keyboard;
    BOOL _showHDUploadOption;
    BOOL _enableHDUploadOption;
    long long _hdUploadSize;
    long long _sdUploadSize;
    int _selectedUploadOption;
}

@property(nonatomic) int selectedUploadOption; // @synthesize selectedUploadOption=_selectedUploadOption;
@property(nonatomic) long long hdUploadSize; // @synthesize hdUploadSize=_hdUploadSize;
@property(nonatomic) long long sdUploadSize; // @synthesize sdUploadSize=_sdUploadSize;
@property(nonatomic) BOOL enableHDUploadOption; // @synthesize enableHDUploadOption=_enableHDUploadOption;
@property(nonatomic) BOOL showHDUploadOption; // @synthesize showHDUploadOption=_showHDUploadOption;
- (id)hdDisabledPlaceHolderText;
- (id)hdVideoPlaceholderText;
- (id)sdVideoPlaceholderText;
- (BOOL)canPublish;
- (id)addressString;
- (id)descriptionCellPlaceholderText;
- (id)titleCellPlaceholderText;
- (id)posterImage;
- (void)editableCell:(id)arg1 textChanged:(id)arg2;
- (void)resignResponder;
- (void)editableCellReturnPressed:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)_accountView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)_albumCellAtRow:(int)arg1;
- (int)_currentSectionForSectionIndex:(int)arg1;
- (int)_sectionIndexForPublishingSection:(int)arg1;
- (void)_selectCurrentCell:(id)arg1 andDeselectPreviousCell:(id)arg2;
- (void)_setCellSelected:(id)arg1;
- (int)chooseVideoUploadOption;
- (void)setAlbums:(id)arg1;
- (void)updateDoneButton;
- (id)selectedAlbum;
- (void)setSelectedAlbum:(id)arg1;
- (id)chooseAlbumForSelection;
- (void)setUsername:(id)arg1;
- (id)contentDescription;
- (id)contentTitle;
- (void)setContentTitle:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

