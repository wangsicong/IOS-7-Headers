/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibrary/PLWAlbumViewController.h>

@class NSArray;

@interface PLWAllPhotosAlbumViewController : PLWAlbumViewController
{
    struct {
        unsigned int expandingItemImagesLoadSynchronously:1;
        unsigned int unused:31;
    } _flags;
    NSArray *_syncProgressAlbums;
}

- (id)_syncProgressAlbums;
- (void)getDisplayPhotoCount:(unsigned int *)arg1 videoCount:(unsigned int *)arg2 pendingCount:(unsigned int *)arg3 importOperation:(int *)arg4;
- (void)setExpandingItemImagesLoadSynchronously:(BOOL)arg1;
- (BOOL)popControllerWhenStackCollapses;
- (void)reclaimStackView;
- (void)assetContainerDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1 imageDataProvider:(id)arg2;

@end
