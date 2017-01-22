/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebImageDownloader.h>

@class FBAssetsLibrary, FBAssetsReader, NSMutableDictionary, FBWebImageAssetsLibrarySpecifier, NSString;

@interface FBWebImageAssetsLibraryDownloader : NSObject <FBWebImageDownloader> {

	FBAssetsLibrary* _assetsLibrary;
	FBAssetsReader* _assetsReader;
	NSMutableDictionary* _loadInfoBySpecifier;
	FBWebImageAssetsLibrarySpecifier* _currentSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadSpecifier:(id)arg1 withAssetSize:(long long)arg2 downloadBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleThumbnailCompletion:(id)arg1 specifier:(id)arg2 assetSize:(long long)arg3 downloadBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)initWithAssetsLibrary:(id)arg1 assetsReader:(id)arg2 ;
-(void)cancel;
@end
