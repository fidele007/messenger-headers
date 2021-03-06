/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, NSArray, FBMUserIdentityTypeProperties;

@interface MNThreadContextViewModel : FBValueObject <NSCopying> {

	BOOL _isPartial;
	BOOL _isVerified;
	BOOL _isSecureThread;
	BOOL _shouldShowAddMessengerContactButton;
	NSString* _userId;
	FBStringWithRedactedDescription* _threadName;
	NSArray* _imageUrls;
	NSString* _contextString;
	NSString* _topDetailString;
	NSString* _bottomDetailString;
	FBMUserIdentityTypeProperties* _identityTypeProperties;
	NSArray* _customTags;
	NSString* _messengerContactStatusString;

}

@property (nonatomic,copy,readonly) NSString * userId;                                                   //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL isPartial;                                                           //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) BOOL isVerified;                                                          //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,readonly) BOOL isSecureThread;                                                      //@synthesize isSecureThread=_isSecureThread - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * threadName;                        //@synthesize threadName=_threadName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageUrls;                                                 //@synthesize imageUrls=_imageUrls - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextString;                                            //@synthesize contextString=_contextString - In the implementation block
@property (nonatomic,copy,readonly) NSString * topDetailString;                                          //@synthesize topDetailString=_topDetailString - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomDetailString;                                       //@synthesize bottomDetailString=_bottomDetailString - In the implementation block
@property (nonatomic,copy,readonly) FBMUserIdentityTypeProperties * identityTypeProperties;              //@synthesize identityTypeProperties=_identityTypeProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customTags;                                                //@synthesize customTags=_customTags - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowAddMessengerContactButton;                                 //@synthesize shouldShowAddMessengerContactButton=_shouldShowAddMessengerContactButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerContactStatusString;                             //@synthesize messengerContactStatusString=_messengerContactStatusString - In the implementation block
-(FBMUserIdentityTypeProperties *)identityTypeProperties;
-(NSString *)topDetailString;
-(NSString *)bottomDetailString;
-(NSArray *)imageUrls;
-(BOOL)shouldShowAddMessengerContactButton;
-(NSString *)messengerContactStatusString;
-(NSArray *)customTags;
-(BOOL)isSecureThread;
-(id)initWithUserId:(id)arg1 isPartial:(BOOL)arg2 isVerified:(BOOL)arg3 isSecureThread:(BOOL)arg4 threadName:(id)arg5 imageUrls:(id)arg6 contextString:(id)arg7 topDetailString:(id)arg8 bottomDetailString:(id)arg9 identityTypeProperties:(id)arg10 customTags:(id)arg11 shouldShowAddMessengerContactButton:(BOOL)arg12 messengerContactStatusString:(id)arg13 ;
-(FBStringWithRedactedDescription *)threadName;
-(NSString *)contextString;
-(BOOL)isPartial;
-(NSString *)userId;
-(BOOL)isVerified;
@end

