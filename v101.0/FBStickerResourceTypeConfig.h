/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBStickerResourceTypeConfig : FBValueObject <NSCopying> {

	BOOL _preloadable;
	NSString* _namePrefix;
	NSString* _fileExtension;
	CGSize _maxSize;

}

@property (nonatomic,readonly) CGSize maxSize;                             //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * namePrefix;                 //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtension;              //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,readonly) BOOL preloadable;                           //@synthesize preloadable=_preloadable - In the implementation block
-(id)initWithMaxSize:(CGSize)arg1 namePrefix:(id)arg2 fileExtension:(id)arg3 preloadable:(BOOL)arg4 ;
-(BOOL)preloadable;
-(CGSize)maxSize;
-(NSString *)fileExtension;
-(NSString *)namePrefix;
@end

