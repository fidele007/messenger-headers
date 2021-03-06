/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPeoplePickerViewController.h>

@class NSArray;

@interface FBFriendPickerViewController : FBPeoplePickerViewController

@property (nonatomic,copy) NSArray * selection; 
+(id)cacheIdentity;
+(id)cacheDescriptor;
+(id)cacheDescriptorWithUserID:(id)arg1 fieldsForRequest:(id)arg2 ;
+(double)cacheRefreshDelay;
+(unsigned long long)graphObjectPagingMode;
+(id)firstRenderLogString;
+(id)graphAPIName;
-(void)notifyDelegateDataDidChange;
-(void)notifyDelegateSelectionDidChange;
-(void)configureUsingCachedDescriptor:(id)arg1 ;
-(void)logAppEvents:(BOOL)arg1 ;
-(BOOL)delegateIncludesGraphObject:(id)arg1 ;
-(void)notifyDelegateOfError:(id)arg1 ;
-(void)setSelection:(NSArray *)arg1 ;
@end

