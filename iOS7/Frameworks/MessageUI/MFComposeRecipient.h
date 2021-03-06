/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFDraggableItem-Protocol.h"
#import "NSCopying-Protocol.h"

@class MFComposeRecipientOriginContext, NSArray, NSString;

@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem>
{
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSString *_label;
    NSString *_countryCode;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    MFComposeRecipientOriginContext *_originContext;
}

+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)recipientWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;
+ (id)mf_recipientWithGALResult:(id)arg1;
@property(readonly, nonatomic) MFComposeRecipientOriginContext *originContext; // @synthesize originContext=_originContext;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)preferredSendingAddress;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;
- (void)setOriginContext:(id)arg1;
- (id)childrenWithCompleteMatches;
- (id)sortedChildren;
- (id)children;
- (BOOL)isGroup;
@property(readonly, nonatomic, getter=isRemovableFromSearchResults) BOOL removableFromSearchResults;
- (id)objectForDragType:(id)arg1;
- (id)supportedDragTypes;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_unformattedAddress;
- (id)uncommentedAddress;
- (id)placeholderName;
- (id)displayString;
- (id)shortName;
- (id)compositeName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setIdentifier:(int)arg1;
- (int)identifier;
- (id)unlocalizedLabel;
- (id)label;
- (id)commentedAddress;
- (id)address;
- (id)normalizedAddress;
- (void)setRecord:(void *)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (int)recordID;
- (void *)record;
- (int)property;
- (id)initWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;

@end

