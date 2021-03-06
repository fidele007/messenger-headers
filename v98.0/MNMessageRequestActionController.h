/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassProvidable.h>

@class MNThreadUpdateRunningService, MNNavigationCoordinator, FBAnalytics, UIAlertController, NSString;

@interface MNMessageRequestActionController : NSObject <FBClassProvidable> {

	MNThreadUpdateRunningService* _updateRunner;
	MNNavigationCoordinator* _navigationCoordinator;
	FBAnalytics* _analytics;
	UIAlertController* _declineAlertController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)acceptRequestWithThreadKey:(id)arg1 withFolderType:(long long)arg2 ;
-(void)declineRequestWithThreadKey:(id)arg1 withFolderType:(long long)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)ignoreRequestWithThreadKey:(id)arg1 ;
-(id)initWithUpdateRunner:(id)arg1 navigationCoordinator:(id)arg2 analytics:(id)arg3 ;
-(void)_deleteThreadWithThreadKey:(id)arg1 folderType:(long long)arg2 ;
-(void)_cancelAlertController;
@end

