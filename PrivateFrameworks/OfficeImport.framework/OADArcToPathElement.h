/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADArcToPathElement : OADPathElement
{
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
}

- (id).cxx_construct;
- (struct OADAdjustCoord)angleLength;
- (struct OADAdjustCoord)startAngle;
- (struct OADAdjustPoint)semiaxes;
- (id)initWithSemiaxes:(struct OADAdjustPoint)arg1 startAngle:(struct OADAdjustCoord)arg2 angleLength:(struct OADAdjustCoord)arg3;

@end

