/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMediaUploadSuccessResponse : FBValueObject <NSCopying> {

	NSString* _fbId;
	NSString* _downloadKey;

}

@property (nonatomic,copy,readonly) NSString * fbId;                     //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * downloadKey;              //@synthesize downloadKey=_downloadKey - In the implementation block
-(NSString *)fbId;
-(id)initWithFbId:(id)arg1 downloadKey:(id)arg2 ;
-(NSString *)downloadKey;
@end

