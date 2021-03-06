/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSString, RCSavedRecording;

@interface RCSavedRecordingTrimOperation : NSOperation
{
    BOOL _trimOriginalFile;
    RCSavedRecording *_savedRecording;
    NSString *_trimmedPath;
    CDStruct_73a5d3ca _timeRangeToTrim;
    CDStruct_73a5d3ca _trimmedTimeRange;
}

+ (BOOL)_trimWaveformAtPath:(id)arg1 clipToTimeRange:(CDStruct_73a5d3ca)arg2 outputPath:(id)arg3;
@property(readonly, nonatomic) CDStruct_73a5d3ca trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(readonly, nonatomic) NSString *trimmedPath; // @synthesize trimmedPath=_trimmedPath;
@property(readonly, nonatomic) BOOL trimOriginalFile; // @synthesize trimOriginalFile=_trimOriginalFile;
@property(readonly, nonatomic) CDStruct_73a5d3ca timeRangeToTrim; // @synthesize timeRangeToTrim=_timeRangeToTrim;
@property(readonly, nonatomic) RCSavedRecording *savedRecording; // @synthesize savedRecording=_savedRecording;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSavedRecording:(id)arg1 timeRangeToTrim:(CDStruct_73a5d3ca)arg2 trimOriginalFile:(BOOL)arg3;

@end

