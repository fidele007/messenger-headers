/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNBusinessFavoritesCellViewModel : FBValueObject <NSCopying> {

	NSString* _pageTitle;
	NSString* _descriptionText;
	NSString* _hostString;
	NSString* _nativeURL;
	NSString* _targetURL;
	NSString* _imageURL;

}

@property (nonatomic,copy,readonly) NSString * pageTitle;                    //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostString;                   //@synthesize hostString=_hostString - In the implementation block
@property (nonatomic,copy,readonly) NSString * nativeURL;                    //@synthesize nativeURL=_nativeURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetURL;                    //@synthesize targetURL=_targetURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageURL;                     //@synthesize imageURL=_imageURL - In the implementation block
-(NSString *)hostString;
-(id)initWithPageTitle:(id)arg1 descriptionText:(id)arg2 hostString:(id)arg3 nativeURL:(id)arg4 targetURL:(id)arg5 imageURL:(id)arg6 ;
-(NSString *)nativeURL;
-(NSString *)targetURL;
-(NSString *)pageTitle;
-(NSString *)descriptionText;
-(NSString *)imageURL;
@end

