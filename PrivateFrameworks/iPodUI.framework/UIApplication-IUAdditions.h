/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIApplication.h"

@class IUiPodTabBarController, IUiPodViewController, UINavigationController, UIViewController;

@interface UIApplication (IUAdditions)
- (void)setStatusBarStyle:(int)arg1 hidden:(BOOL)arg2 orientation:(int)arg3 duration:(double)arg4;
@property(readonly, nonatomic) UIViewController *IUTopViewController;
@property(readonly, nonatomic) UINavigationController *IUTopNavigationController;
@property(readonly, nonatomic) IUiPodTabBarController *IUTabBarController;
@property(readonly, nonatomic) UIViewController *IURootViewController;
@property(readonly, nonatomic) unsigned int IUInterfaceType;
@property(readonly, nonatomic) unsigned int IUInterfaceOrientationMask;
@property(readonly, nonatomic) IUiPodViewController *IUFullScreenViewController;
- (void)endUserInteractionFocusOnView:(id)arg1;
- (void)beginUserInteractionFocusOnView:(id)arg1 focusEndedBlock:(id)arg2;
@property(readonly, nonatomic, getter=isNoAnimationResumeEventsOnly) BOOL noAnimationResumeEventsOnly;
- (void)endNoAnimationResumeEventsOnly;
- (void)configureStatusBarForController:(id)arg1 duration:(double)arg2;
- (void)beginNoAnimationResumeEventsOnly;
@end
