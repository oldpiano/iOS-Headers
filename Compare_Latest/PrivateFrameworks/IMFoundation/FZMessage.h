/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMRemoteObjectCoding-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString;

@interface FZMessage : NSObject <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString *_handle;
    NSString *_service;
    NSString *_account;
    NSString *_subject;
    NSString *_unformattedID;
    NSString *_accountID;
    NSString *_roomName;
    NSDictionary *_senderInfo;
    NSString *_plainBody;
    unsigned int _error;
    NSString *_guid;
    NSDate *_time;
    NSArray *_fileTransferGUIDs;
    NSString *_countryCode;
    NSAttributedString *_body;
    NSData *_bodyData;
    NSDate *_timeRead;
    NSDate *_timeDelivered;
    unsigned long long _flags;
    long long _replaceID;
    long long _messageID;
}

@property(retain, nonatomic) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property(retain, nonatomic) NSDate *timeRead; // @synthesize timeRead=_timeRead;
@property(nonatomic) long long messageID; // @synthesize messageID=_messageID;
@property(nonatomic) long long replaceID; // @synthesize replaceID=_replaceID;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_error;
@property(retain, nonatomic) NSString *plainBody; // @synthesize plainBody=_plainBody;
@property(retain, nonatomic) NSDictionary *senderInfo; // @synthesize senderInfo=_senderInfo;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) NSAttributedString *body; // @synthesize body=_body;
- (void)_clearBodyData;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (void)_generateBodyTextIfNeeded;
- (void)_generateBodyDataIfNeeded;
- (void)adjustIsEmptyFlag;
- (void)_updateFlags:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *sender;
- (void)setWasDataDetected:(BOOL)arg1;
@property(readonly, nonatomic) BOOL wasDataDetected;
@property(nonatomic) BOOL hasDataDetectorResults;
@property(readonly, nonatomic) BOOL wasDowngraded;
@property(readonly, nonatomic) BOOL isSent;
- (BOOL)isEmote;
@property(readonly, nonatomic) BOOL isTypingMessage;
@property(readonly, nonatomic) BOOL isPrepared;
@property(readonly, nonatomic) BOOL isDelivered;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) BOOL isRead;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL isFinished;
@property(readonly, nonatomic) BOOL isAlert;
- (void)dealloc;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 subject:(id)arg5 body:(id)arg6 bodyData:(id)arg7 attributes:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 guid:(id)arg11 messageID:(long long)arg12 account:(id)arg13 accountID:(id)arg14 service:(id)arg15 handle:(id)arg16 roomName:(id)arg17 unformattedID:(id)arg18 countryCode:(id)arg19 errorType:(unsigned int)arg20;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)copyDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

