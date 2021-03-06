/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer-Protocol.h"

@interface VKDebugModel : VKModelObject <VKMapLayer>
{
    BOOL _geocentric;
    float _fontSize;
}

@property(nonatomic) BOOL geocentric; // @synthesize geocentric=_geocentric;
- (void)_paintTile:(id)arg1 fromLayer:(unsigned int)arg2 withContext:(id)arg3;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (unsigned int)supportedRenderPasses;
- (unsigned int)mapLayerPosition;

@end

