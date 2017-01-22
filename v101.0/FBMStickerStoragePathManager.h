/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStickerUserSettings;
@class NSString, FBDeprecatedDirectoryRemover;

@interface FBMStickerStoragePathManager : NSObject {

	id<FBStickerUserSettings> _userSettings;
	NSString* _stickerRootDirectory;
	long long _initStickerRootDirectoryToken;
	FBDeprecatedDirectoryRemover* _deprecatedDirectoryRemover;

}
-(id)initWithUserSettings:(id)arg1 ;
-(id)generateStickerStoragePath;
-(id)_generateStorageFilename;
-(id)stickerRootDirectoryPath;
@end
