/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUInputSource.h>

@class NSData;

@interface SUDataInputSource : SUInputSource
{
    NSData *_data;
    int _offset;
    id _promiseBlock;
}

- (int)read:(char *)arg1 maxLength:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)open:(id *)arg1;
- (BOOL)hasBytesAvailable;
- (long long)expectedLength;
@property(readonly, nonatomic) NSData *data;
- (id)copyAllData:(id *)arg1;
- (void)dealloc;
- (id)initWithDataPromise:(id)arg1;
- (id)initWithData:(id)arg1;

@end
