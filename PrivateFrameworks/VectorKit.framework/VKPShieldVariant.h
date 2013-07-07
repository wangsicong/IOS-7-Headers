/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldVariant : PBCodable
{
    CDStruct_79d0722e _textShadow;
    CDStruct_f43f0670 _textStroke;
    CDStruct_58ec0031 _fontColor;
    CDStruct_d570ea55 _centerPoints;
    unsigned int _atlasIndex;
    float _centerOffsetX;
    NSString *_fontName;
    float _fontSize;
    unsigned int _maxDigits;
    unsigned int _minDigits;
    NSString *_nonDigitFontName;
    float _nonDigitFontSize;
    unsigned int _quadIndex;
    float _textBaseLine;
    struct {
        unsigned int textShadow:1;
        unsigned int textStroke:1;
        unsigned int fontColor:1;
        unsigned int centerOffsetX:1;
        unsigned int fontSize:1;
        unsigned int maxDigits:1;
        unsigned int minDigits:1;
        unsigned int nonDigitFontSize:1;
        unsigned int textBaseLine:1;
    } _has;
}

@property(nonatomic) float nonDigitFontSize; // @synthesize nonDigitFontSize=_nonDigitFontSize;
@property(retain, nonatomic) NSString *nonDigitFontName; // @synthesize nonDigitFontName=_nonDigitFontName;
@property(nonatomic) CDStruct_79d0722e textShadow; // @synthesize textShadow=_textShadow;
@property(nonatomic) CDStruct_f43f0670 textStroke; // @synthesize textStroke=_textStroke;
@property(nonatomic) CDStruct_58ec0031 fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) float centerOffsetX; // @synthesize centerOffsetX=_centerOffsetX;
@property(nonatomic) float textBaseLine; // @synthesize textBaseLine=_textBaseLine;
@property(nonatomic) unsigned int maxDigits; // @synthesize maxDigits=_maxDigits;
@property(nonatomic) unsigned int minDigits; // @synthesize minDigits=_minDigits;
@property(nonatomic) unsigned int quadIndex; // @synthesize quadIndex=_quadIndex;
@property(nonatomic) unsigned int atlasIndex; // @synthesize atlasIndex=_atlasIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setCenterPoints:(float *)arg1 count:(unsigned int)arg2;
- (float)centerPointAtIndex:(unsigned int)arg1;
- (void)addCenterPoint:(float)arg1;
- (void)clearCenterPoints;
@property(readonly, nonatomic) float *centerPoints;
@property(readonly, nonatomic) unsigned int centerPointsCount;
@property(nonatomic) BOOL hasNonDigitFontSize;
@property(readonly, nonatomic) BOOL hasNonDigitFontName;
@property(nonatomic) BOOL hasTextShadow;
@property(nonatomic) BOOL hasTextStroke;
@property(nonatomic) BOOL hasFontColor;
@property(nonatomic) BOOL hasFontSize;
@property(readonly, nonatomic) BOOL hasFontName;
@property(nonatomic) BOOL hasCenterOffsetX;
@property(nonatomic) BOOL hasTextBaseLine;
@property(nonatomic) BOOL hasMaxDigits;
@property(nonatomic) BOOL hasMinDigits;
- (void)dealloc;

@end
