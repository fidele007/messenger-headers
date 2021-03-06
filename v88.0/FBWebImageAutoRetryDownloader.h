/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebImageDownloader.h>

@protocol FBWebImageDownloader, FBWebImageSpecifier, FBCallPath;
@class NSDictionary, FBScenePath, NSString;

@interface FBWebImageAutoRetryDownloader : NSObject <FBWebImageDownloader> {

	id<FBWebImageDownloader> _webImageDownloader;
	NSDictionary* _retryableErrorDomainAndCodes;
	id<FBWebImageSpecifier> _currentSpecifier;
	FBScenePath* _currentScenePath;
	id<FBCallPath> _currentCallPath;
	BOOL _alreadyRetried;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebImageDownloader:(id)arg1 retryableErrorDomainAndCodes:(id)arg2 ;
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 callPath:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(void)_handleResponse:(id)arg1 filterSpecifier:(id)arg2 queue:(id)arg3 downloadBlock:(/*^block*/id)arg4 ;
-(void)cancel;
@end

