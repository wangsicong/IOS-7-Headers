/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVController;

@interface RCAVPreviewController : NSObject
{
    AVController *_avController;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) AVController *avController; // @synthesize avController=_avController;
- (void).cxx_destruct;
- (void)_serverDied:(id)arg1;
- (void)_createAVController;
- (void)dealloc;
- (id)init;

@end

