/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSThread.h"

@class ALAsset, ALAssetsLibrary, NSCondition, NSURL;

__attribute__((visibility("hidden")))
@interface _UIGetAssetThread : NSThread
{
    NSURL *_url;
    ALAssetsLibrary *_library;
    NSCondition *_condition;
    ALAsset *_asset;
}

@property(retain) NSCondition *condition; // @synthesize condition=_condition;
@property(retain) ALAsset *asset; // @synthesize asset=_asset;
- (void)main;
- (void)dealloc;
- (id)initWithURL:(id)arg1 assetsLibrary:(id)arg2;

@end

