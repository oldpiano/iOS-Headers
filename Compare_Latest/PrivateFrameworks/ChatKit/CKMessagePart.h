/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKTranscriptDataRowObject-Protocol.h"

@class NSAttributedString, NSString;

@interface CKMessagePart : NSObject <CKTranscriptDataRowObject>
{
    BOOL _color;
    NSString *_guid;
    NSAttributedString *_displayText;
    id <CKMessage> _parentMessage;
    int _partID;
}

+ (id)copyMessagePartsFromComposition:(id)arg1;
+ (id)copyMessagePartsFromComposition:(id)arg1 attachmentParts:(id *)arg2;
+ (id)textFromHTML:(id)arg1;
+ (id)copyDetachedMessageParts:(id)arg1;
+ (id)_newPartsForNode:(id)arg1 resources:(id)arg2 attachments:(id *)arg3;
+ (id)_assembleTextPartFromRange:(id)arg1;
@property(nonatomic) BOOL color; // @synthesize color=_color;
@property(nonatomic) int partID; // @synthesize partID=_partID;
@property(nonatomic) id <CKMessage> parentMessage; // @synthesize parentMessage=_parentMessage;
- (id)pasteboardItems;
- (int)type;
- (id)detachedCopy;
- (id)imageFilename;
- (id)previewImage;
- (id)highlightData;
- (id)image;
- (id)imageData;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *displayText; // @synthesize displayText=_displayText;
- (id)text;
- (BOOL)isSeparateSubjectPart;
- (id)previewText;
@property(readonly, nonatomic) BOOL isOutgoing;
- (id)mediaObject;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)__ck_displayContactImage;
- (void)__ck_prewarmForDisplay;
- (BOOL)__ck_displayDuringSend;
- (BOOL)__ck_displayTranscriptOrientation;
- (struct UIEdgeInsets)__ck_displayContentAlignmentInsets;
- (struct CGSize)__ck_displaySize:(struct UIEdgeInsets *)arg1;
- (id)__ck_displayCellIdentifier;
- (Class)__ck_displayCellClass;
- (id)__ck_displayGUIDWithMessage:(id)arg1;
- (id)composeImages;
- (Class)balloonViewClass;

@end

