/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewModelAdapterToolbox.h>

@class FBUserSession, NSString;

@interface FBRichStoryAdapterToolbox : NSObject <FBViewModelAdapterToolbox> {

	FBUserSession* _session;
	NSString* _articleID;

}

@property (nonatomic,readonly) FBUserSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 articleID:(id)arg2 ;
-(FBUserSession *)session;
-(NSString *)articleID;
@end

