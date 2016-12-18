/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadContextDownloadingFactory.h>

@protocol FBProvider;
@class NSString;

@interface MNThreadContextDownloaderFactory : NSObject <FBClassProvidable, MNThreadContextDownloadingFactory> {

	id<FBProvider> _pageThreadContextDownloaderProvider;
	id<FBProvider> _userThreadContextDownloaderProvider;
	id<FBProvider> _groupThreadContextDownloaderProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadContextDownloaderForThreadKey:(id)arg1 user:(id)arg2 ;
-(id)initWithUserContextDownloaderProvider:(id)arg1 pageContextDownloaderProvider:(id)arg2 groupThreadContextDownloaderProvider:(id)arg3 ;
@end
