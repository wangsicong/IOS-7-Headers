/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UINavigationController.h"

@interface MFMailComposeViewController : UINavigationController
{
    id _internal;
    id _setupAnimationBlock;
}

+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (unsigned int)maximumAttachmentSize;
+ (BOOL)canSendMailSourceAccountManagement:(int)arg1;
+ (BOOL)canSendMail;
- (BOOL)shouldAutorotate;
- (void)setAutorotationDelegate:(id)arg1;
- (void)autosaveWithHandler:(id)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)addSetupAnimationBlock:(id)arg1;
- (void)finalizeCompositionValues;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id)arg2;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (void)setSubject:(id)arg1;
@property(nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)_internalViewController;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
