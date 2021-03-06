/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WDRun.h>

@class NSDate, NSString, WDCharacterRun, WDText;

@interface WDAnnotation : WDRun
{
    int mType;
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    NSDate *mDate;
    NSString *mOwner;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (id)text;
- (id)reference;
- (BOOL)referencePropertiesFixed;
- (void)setReferencePropertiesFixed;
- (int)runType;
- (int)annotationType;
- (id)date;
- (void)setDate:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)otherEndOfRangedAnnotation;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)dealloc;

@end

