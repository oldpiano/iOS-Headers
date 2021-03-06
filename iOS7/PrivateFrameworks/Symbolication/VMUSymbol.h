/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUAddressRange.h>

#import "NSCopying-Protocol.h"

@class NSString, VMUSymbolOwner;

@interface VMUSymbol : VMUAddressRange <NSCopying>
{
    NSString *_name;
    NSString *_mangledName;
    VMUSymbolOwner *_owner;
    unsigned int _flags;
}

+ (id)symbolWithName:(id)arg1 mangledName:(id)arg2 addressRange:(struct _VMURange)arg3 owner:(id)arg4 flags:(unsigned int)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isEqualToSymbol:(id)arg1;
- (int)compare:(id)arg1;
- (BOOL)isThumb;
- (BOOL)isArm;
- (BOOL)isDwarf;
- (BOOL)isStab;
- (BOOL)isExternal;
- (BOOL)isDyldStub;
- (BOOL)isJavaMethod;
- (BOOL)isObjcMethod;
- (BOOL)isFunction;
- (unsigned int)flags;
- (id)text;
- (id)sourceInfosInAddressRange:(struct _VMURange)arg1;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)sourceInfos;
- (id)owner;
- (struct _VMURange)addressRange;
- (id)mangledName;
- (id)name;
- (id)initWithName:(id)arg1 mangledName:(id)arg2 addressRange:(struct _VMURange)arg3 owner:(id)arg4 flags:(unsigned int)arg5;
- (void)setOwner:(id)arg1;

@end

