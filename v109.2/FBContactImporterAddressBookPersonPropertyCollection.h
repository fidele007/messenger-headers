/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBContactImporterAddressBookPersonPropertyCollection : NSObject {

	NSMutableArray* _propertyCollection;
	Class _propertyClass;

}
-(id)asStrings;
-(void)_initFromABRecord:(void*)arg1 propertyID:(int)arg2 ;
-(id)initWithABRecord:(void*)arg1 propertyID:(int)arg2 propertyClass:(Class)arg3 ;
-(void)enumeratePropertyUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)description;
@end

