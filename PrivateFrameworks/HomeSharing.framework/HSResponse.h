/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSString;

@interface HSResponse : NSObject
{
    NSData *_responseData;
    unsigned int _responseCode;
    NSDictionary *_responseHeaderFields;
    NSError *_error;
    NSString *_MIMEType;
}

+ (id)responseWithResponse:(id)arg1;
+ (id)responseWithCode:(unsigned int)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseHeaderFields; // @synthesize responseHeaderFields=_responseHeaderFields;
@property(readonly, nonatomic) unsigned int responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (id)description;
- (void)dealloc;
- (id)initWithCode:(unsigned int)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;

@end
