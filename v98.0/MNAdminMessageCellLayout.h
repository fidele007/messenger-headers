/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassProvidable.h>

@class MNAdminMessageContentExtractor, FBUserSession, FBMobileConfigContextManager, NSString;

@interface MNAdminMessageCellLayout : NSObject <FBClassProvidable> {

	MNAdminMessageContentExtractor* _contentExtractor;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(double)heightForMessageRow:(id)arg1 tableWidth:(double)arg2 ;
-(id)initWithAdminMessageContentExtractor:(id)arg1 session:(id)arg2 configManager:(id)arg3 ;
-(MNAdminMessageCellLayoutInfo)getLayoutForMessageRow:(id)arg1 tableWidth:(double)arg2 ;
-(CGRect)_labelFrameForText:(id)arg1 tableWidth:(double)arg2 ;
-(double)_heightForAttributedString:(id)arg1 maxWidth:(double)arg2 ;
@end

