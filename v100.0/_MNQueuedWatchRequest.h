/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>

@class MNWParentAppRequest, NSURL;

@interface _MNQueuedWatchRequest : FBValueObject {

	MNWParentAppRequest* _request;
	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) MNWParentAppRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
-(id)initWithRequest:(id)arg1 fileURL:(id)arg2 ;
-(MNWParentAppRequest *)request;
-(NSURL *)fileURL;
@end

