/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNDiscoveryCategoryViewModel : FBValueObject <NSCopying> {

	NSString* _categoryID;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * categoryID;              //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
-(id)initWithCategoryID:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(NSString *)categoryID;
@end

