/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject
{
    BBBulletin *_bulletin;
    unsigned int _feeds;
}

@property(nonatomic) unsigned int feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;

@end

