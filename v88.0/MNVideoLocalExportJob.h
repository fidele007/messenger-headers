/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNVideoExportJob.h>

@class NSURL, NSString;

@interface MNVideoLocalExportJob : NSObject <MNVideoExportJob> {

	NSURL* _sourceURL;
	NSURL* _destinationURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)beginWithCallbackQueue:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 progress:(/*^block*/id)arg4 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
@end

